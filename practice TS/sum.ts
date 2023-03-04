const data=[100, 98, 76, 59, 87]
let sum = 0
for(let num of data){
    /*num = data[0~(.length-1)]*/
    sum += num
}
const avg = sum/data.length
console.log('合計sum='+sum)
console.log('平均avg='+avg)
