//Fruitクラス:4つのコンストラクタと合計表示メソッド
public class Fruit {
	String name;//フルーツ名
	int price;//フルーツ価格
	public static int sum = 0;//購入したフルーツの会計

	public Fruit() {//引数なしコンストラクタ
		name = "すいか";//name に「すいか」
		price = 300;//price に 300 を設定
		System.out.println("300円のスイカを購入");//表示
		sum += price;//会計加算
	}

	public Fruit(String name) {//引数が name だけコンストラクタ
		this.name = name;//name に引数の値
		price = 200;//price に 200 を設定
		System.out.println("200円の" + name + "を購入");//表示
		sum += price;//会計加算
	}

	public Fruit(int price) {//引数がpriceだけコンストラクタ
		name = "すいか";//name に「すいか」
		this.price = price;//price に引数の値を設定
		System.out.println(+price + "円のスイカを購入");//表示
		sum += price;//会計加算
	}

	public Fruit(String name, int price) {//引数が name と price のコンストラクタ
		this.name = name;//name に引数の値
		this.price = price;//price に引数の値を設定
		System.out.println(+price + "円の" + name + "を購入");//表示
		sum += price;//会計加算
	}

	public int buy(int cnt) {//buy(int cnt)メソッド
		int supri = sum;//int suoriにsumを代入
		return supri;//buy(int cnt)メソッド:cnt 個の値段を返却
	}
}

/*実行結果
300円のスイカを購入
200円のメロンを購入
476円のスイカを購入
568円のバナナを購入
780円のスターフルーツを購入
5個のフルーツの合計金額は2324*/
