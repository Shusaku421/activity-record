//SoftC07Part3クラス:
public class SoftC07Part3 {

	public static void main(String[] args) {//メインメソッド

		Dictionary dictionary = new Dictionary();//Dictionaryインスタンス生成
		Crow crow = new Crow();//Crowインスタンス生成
		Sparrow sparrow = new Sparrow();//Sparrowインスタンス生成

		//Crow インスタンスを引数に、Dictionary インスタンスの showBirdFeature()を呼び出す
		dictionary.showBirdFeature(crow);
		//Sparrow インスタンスを引数に、Dictionary インスタンスの showBirdFeature()を呼び出す
		dictionary.showBirdFeature(sparrow);
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