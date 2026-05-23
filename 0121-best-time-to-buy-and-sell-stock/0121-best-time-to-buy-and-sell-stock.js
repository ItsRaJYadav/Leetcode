/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let maxPrice = 0, minPrice = Infinity;
    for (let i = 0 ;i<prices.length; i++) {
        minPrice = Math.min(prices[i], minPrice)
        maxPrice = Math.max(maxPrice, prices[i] - minPrice)
    }

    return maxPrice;
};