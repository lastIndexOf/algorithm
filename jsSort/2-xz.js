const sort = arr => {
  const len = arr.length

  let min
  for (let i = len - 1; i > 0; i--) {
    min = i

    for (let j = i - 1; j >= 0; j--) {
      if (arr[j] < arr[min]) {
        min = j
      }
    }

    ;[arr[min], arr[i]] = [arr[i], arr[min]]
  }
}

let arr = [5, 4, 3, 2, 1]

sort(arr)

console.log(arr)
