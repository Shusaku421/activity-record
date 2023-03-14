/*合計を返す関数 */
function total(n:number):void{
    let t:number=0
    for(let i=0;i<=n;i++){
        t += i
    }
    console.log("1~"+n+"までの合計は "+t)
}
total(123)
total(1234)
total(12345)

/*
[LOG]: "1~123までの合計は 7626" 
[LOG]: "1~1234までの合計は 761995" 
[LOG]: "1~12345までの合計は 76205685" 
*/