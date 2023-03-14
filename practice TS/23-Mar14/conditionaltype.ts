/* 条件型を使ってみる*/

/*msg型は hello または bye しか代入できない*/
/* 実質的にenum型と同じような使い方ができる*/
type msg = "hello" | "bye"
type name = string


const taro:name = "taro"
const msg1:msg ="hello"
console.log(msg1+","+taro)

const hanako:name = "hanako"
const msg2:msg = "bye"
console.log(msg2+","+hanako)

/*
[LOG]: "hello,taro" 
[LOG]: "by,hanako" 
*/
