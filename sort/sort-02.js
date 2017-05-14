const
  sortTest = require('./sortTest.js')

const insertSort = arr => {

  const len = arr.length

  for (let i = 0; i < len; i++) {

    let e = arr[i]
    let j
    for (j = i; j > 0 && arr[j - 1] > e; j--) {
      arr[j] = arr[j - 1]
    }

    arr[j] = e
  }
}


;(function main() {

  const n = 10000

  let arr = sortTest.generateRandomArray(n, 0, n)

  insertSort(arr)

  sortTest.printArr(arr)
})()
