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
  let arr = [8, 7, 6, 5, 4, 3, 2, 1]

  selectSort(arr)

  for (item of arr)
    process.stdout.write(item + ' ')

  console.log('')
})()
