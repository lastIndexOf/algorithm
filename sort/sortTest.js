module.exports = {
  generateRandomArray(n, rangeL, rangeR) {

    if (rangeL >= rangeR) {
      console.error('rangeL must be smaller')
      process.exit(0)
    }

    let arr = []

    for (let i = 0; i < n; i++) {
      const randomNum = Math.round(Math.random() * (rangeR - rangeL)) + rangeL

      arr.push(randomNum)
    }

    return arr
  },

  printArr(arr) {
    if (!(arr instanceof Array)) return

    for (let item of arr) {
      process.stdout.write(`${ item } `)
    }
  }
}
