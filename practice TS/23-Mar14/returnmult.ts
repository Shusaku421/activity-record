/* 複数の値を返す関数(※タプル型の関数)*/

/* 与えられた金額から、本体価格と税額を算出し返す*/
function calcTax(price:number):[price:number, tax:number]{
    const p = price/1.1
    const t = price-p
    return [p, t]
}

const [printp, printt] = calcTax(2750)
console.log("2750円の本体価格は"+printp+"円, 税額は"+printt+"円")

/*
[LOG]: "2750円の本体価格は2500円, 税額は250円"
*/