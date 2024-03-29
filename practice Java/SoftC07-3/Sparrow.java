//Birdクラスを継承したSparrowクラス:スズメについて
public class Sparrow extends Bird {

	public void showName() {//void showName()メソッドをオーバーライド
		System.out.println("スズメ目スズメ科スズメ");//表示
	}

	public void about() {//void abot()メソッドをオーバーライド
		System.out.println("頭部が赤茶色、背中は褐色で縦に黒斑があり、翼に2本の細い白帯がある。チュンチュンと鳴く。ユーラシア大陸の広い範囲に分布する。");//表示
	}

	public void feed() {//void feed()メソッドをオーバーライド
		System.out.println("植物の種子や虫を食べる。パンくずを与えると食べにくるときがある。");//表示
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