/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    // return arr.flat(n);

    if (n < 0) {
        return arr;
    }

    let result = [];
    function dfs(arr, dep) {
        for (const element of arr) {
            if (Array.isArray(element) && dep > 0) {
                dfs(element, dep - 1);
            } else {
                result.push(element);
            }
        }
    }
    dfs(arr, n);
    return result;
};