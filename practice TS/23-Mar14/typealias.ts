/*型エイリアスでタプルをわかりやすく*/
type name = string
type mail = string
type age = number
type person = [name, mail, age]

const taro:person = ['taro', 'taro@mail', 23]
const hanako:person = ['hanako', 'hanako@mail', 14]
const sachiko:person = ['sachiko', 'sachiko@mail', 18]

const data:person[] = [taro, hanako, sachiko]

for(let item of data){
    console.log(item)
}

/*
[LOG]: ["taro", "taro@mail", 23] 
[LOG]: ["hanako", "hanako@mail", 14] 
[LOG]: ["sachiko", "sachiko@mail", 18] 
*/