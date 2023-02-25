//ChocolateCakeクラス:Cakeクラスを継承、Decorateインターフェースを実装
public class ChocolateCake extends Cake implements Decorate {

	public void decorate() {//decorateインターフェースをオーバーライド
		System.out.println("チョコレートで飾りました.");//「チョコレートで飾りました.」表示
	}
}

/*実行結果
本体のスポンジケーキ
チョコレートで飾りました.
本体のスポンジケーキ
イチゴで飾りました.
*/