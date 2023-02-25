//Dictionaryクラス：各メソッド呼び出し
public class Dictionary {
	//void showBirdFeature(Bird bird)メソッド:bird の名前、特徴、食性を表示するメソッドを順に呼び出す
	public void showBirdFeature(Bird bird) {
		bird.showName();//birdインスタンスshowName()メソッド呼び出し
		bird.about();//birdインスタンスabout()メソッド呼び出し
		bird.feed();//birdインスタンスfeed()メソッド呼び出し
	}
}

/*実行結果
カラス科カラス
全身が黒く黒い鳥の代表とされる。カーカーと鳴く。至る所で見ることができる
ゴミから生ゴミをついばむのが得意です。ゴミ集積所を荒らすのでゴミは時間に注意して捨てましょう
スズメ目スズメ科スズメ
頭部が赤茶色、背中は褐色で縦に黒斑があり、翼に2本の細い白帯がある。チュンチュンと鳴く。ユーラシア大陸の広い範囲に分布する。
植物の種子や虫を食べる。パンくずを与えると食べにくるときがある。
*/
