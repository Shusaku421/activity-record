//Phoneクラス:各種情報を保持、電話の応答
public class Phone {
	String Own = "佐藤太郎";//所有者名
	int[] num = { 0, 1, 2, 0, 4, 5, 6, 9, 8, 7 };//電話番号
	int telfee = 356;//電話料金
	int uprice = 100;//単価

	public void toCall() {//電話をかけるメソッド
		System.out.println("電話をかける");//「電話をかける」と表示
		telfee = telfee + uprice;//電話料金に単価を加算
	}

	public void ReCall() {//電話を受けるメソッド
		System.out.println("呼び鈴が鳴る");//「呼び鈴が鳴る」と表示
		System.out.println("電話を受ける");//「電話を受ける」と表示
	}
}

/*実行結果
各種情報を表示
所有者名は佐藤太郎
電話番号は0120456987
電話料金は356
単価は100
メールする
電話番号012011122へ電話をかける
斎藤始さんへ電話をかける
電話帳を確認して電話をかける
電話の所有者は佐藤太郎
電話料金は656
 */
