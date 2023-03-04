/*列挙型を使ってみる*/
/*新しく作ったデータ型janken型は以下の3つしか選べない*/
enum janken {goo, choki, paa}
const you = janken.goo

switch(you){
    case janken.goo:
        console.log('あいこ')
        break
    case janken.choki:
        console.log('あなたの勝ち')
        break
    case janken.paa:
        console.log('あなたの負け')
        break
}
