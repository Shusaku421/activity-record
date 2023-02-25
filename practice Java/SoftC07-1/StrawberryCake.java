//StrawberryCakeクラス:Cakeクラスを継承、Decorateインターフェースを実装
public class StrawberryCake extends Cake implements Decorate {

	public void decorate() {//decorateインターフェースをオーバーライド
		System.out.println("イチゴで飾りました.");//「イチゴで飾りました.」表示
	}
}

/*実行結果
本体のスポンジケーキ
チョコレートで飾りました.
本体のスポンジケーキ
イチゴで飾りました.
*/