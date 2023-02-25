//Phoneクラスを継承したCellPhoneクラス
public class CellPhone extends Phone {

	public void mail() {//mailメソッド
		System.out.println("メールする");//「メールする」と表示
	}
	//toCallメソッドをオーバーロード:名前(文字列)を引数として電話をかける
	public void toCall(String name) {
		System.out.print(name + "さんへ");//nameさんへ電話をかける
		super.toCall();//親クラスのtoCallメソッド呼び出し
	}

	//toCallメソッドをオーバーロード:番号(数値)を引数として電話をかける
	public void toCall(int x[]) {
		System.out.print("電話番号");//電話番号
		for (int i = 0; i < x.length; i++) {//iをxの要素の個数分インクリメント
			System.out.print(x[i]);//電話番号を表示
		}
		System.out.print("へ");
		super.toCall();//親クラスのtoCallメソッド呼び出し
	}

	//toCallメソッドをオーバーロード:電話帳を確認して電話をかける
	public void toCall() {
		System.out.print("電話帳を確認");//電話帳確認
		super.toCall();//親クラスのtoCallメソッド呼び出し
	}

	public void ownm() {//所有者情報を表示するメソッドownm
		System.out.println("電話の所有者は" + Own);//「電話の所有者はOwn」と表示
	}

	public void telfeem() {//電話料金を表示するメソッドtelfeem
		System.out.println("電話料金は" + telfee);//電話料金を表示
	}

	public void info() {//各種情報を表示するメソッド
		System.out.println("各種情報を表示");//各種情報を表示
		System.out.println("所有者名は" + Own);//所有者名表示
		System.out.print("電話番号は");//電話番号表示
		for (int i = 0; i < num.length; i++) {//iをnumの要素の個数分インクリメント
			System.out.print(num[i]);////電話番号を表示
		}
		System.out.println();
		System.out.println("電話料金は" + telfee);//電話料金表示
		System.out.println("単価は" + uprice);//単価表示
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