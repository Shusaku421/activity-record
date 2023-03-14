/* 型のチェック*/
type id = number | string

const idA:id = "taro"
const idB:id = 125

const tp = idA

/* typeof(tp)でtpの型チェックを行う*/
switch(typeof(tp)){
    case "number":
        console.log(tp+" はnumber型")
        break
    case "string":
        console.log(tp+" はstring型")
        break
    default:
        console.log("型不明")
}

/*
taro はnumber型
*/
