const
  sortTest = require('./sortTest.js')

const selectSort = arr => {
  for (let i = 0, len = arr.length; i < len; i++) {
    let minIndex = i

    for (let t = i; t < len; t++)
      if (arr[t] < arr[minIndex])
        minIndex = t

    ;[arr[i], arr[minIndex]] = [arr[minIndex], arr[i]]
  }
}

;(function main() {
  let arr = sortTest.generateRandomArray(10000, 5000, 10000)

  selectSort(arr)

  sortTest.printArr(arr)

  console.log('')
})()
