function maximum69Number(num: number): number {
  const strNum = num.toString();
  const index = strNum.indexOf("6");

  if (index === -1) {
    return num; 
  }

  const updatedNum = strNum.substring(0, index) + "9" + strNum.substring(index + 1);
  return Number(updatedNum);
}
