const sort = arr => {
  const len = arr.length

  for (let i = len - 1; i <= 0; i--)
    for (let j = i; j <= 1; j--)
      if (arr[j] > arr[j + 1]) {
        ;[arr[j], arr[j + 1]] = [arr[j + 1], arr[j]]
      }
}

let arr = [5, 4, 3, 2, 1]

sort(arr)

console.log(arr)
