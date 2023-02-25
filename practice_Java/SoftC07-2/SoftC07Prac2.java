//SoftC07Prac2クラス:フルーツを買う
public class SoftC07Prac2 {
	//メインメソッド
	public static void main(String[] args) {
		int total = 0;//int 型 total,初期値 0

		Fruit fruit0 = new Fruit();//Fruitインスタンス引数なし
		Fruit fruit1 = new Fruit("メロン");//Fruitインスタンス引数Stringメロン
		Fruit fruit2 = new Fruit(476);//Fruitインスタンス引数int476
		Fruit fruit3 = new Fruit("バナナ", 568);//Fruitインスタンス引数Stringバナナ,int 568
		Fruit fruit4 = new Fruit("スターフルーツ", 780);//Fruitインスタンス引数Stringスターフルーツ,int 780
		total = fruit4.buy(5);//totalへ合計値を代入
		System.out.println("5個のフルーツの合計金額は" + total);//5 つのフルーツをそれぞれ適当な数を購入した場合の合計価格を表示
	}
}

/*実行結果
300円のスイカを購入
200円のメロンを購入
476円のスイカを購入
568円のバナナを購入
780円のスターフルーツを購入
5個のフルーツの合計金額は2324*/