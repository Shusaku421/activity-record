//SoftC06Part3メソッド：電話のやり取り
public class SoftC06Part3 {
	//メインメソッド
	public static void main(String[] args) {

		CellPhone inst = new CellPhone();//CellPhoneインスタンス
		String str = "斎藤始";//名前（引数）
		int[] n = { 0, 1, 2, 0, 1, 1, 1, 2, 2 };//電話番号(引数)

		inst.info();//CellPhoneインスタンスinfoメソッド呼び出し
		inst.mail();//CellPhoneインスタンスmailメソッド呼び出し
		inst.toCall(n);//int型配列nを引数にCellPhoneインスタンスtoCallメソッド(オーバーロード)呼び出し
		inst.toCall(str);//String型strを引数にCellPhoneインスタンスtoCallメソッド(オーバーロード)呼び出し
		inst.toCall();//CellPhoneインスタンスtoCallメソッド(オーバーロード)呼び出し
		inst.ownm();//CellPhoneインスタンスownmメソッド呼び出し
		inst.telfeem();//CellPhoneインスタンスtelfeemメソッド呼び出し
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