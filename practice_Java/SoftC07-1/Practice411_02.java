// Practice411_02クラス:継承と実装の同時使用例
public class Practice411_02 {
	//メインメソッド
	public static void main(String[] args) {
		ChocolateCake cake1 = new ChocolateCake();//ChocolateCakeインスタンス
		StrawberryCake cake2 = new StrawberryCake();//StrawberryCakeインスタンス

		// 各ケーキの本体と飾り方を表示
		cake1.body();//ChocolateCakeインスタンスbodyメソッドを呼び出し
		cake1.decorate();//ChocolateCakeインスタンスdecotrateメソッドを呼び出し
		cake2.body();//StrawberryCakeインスタンスbodyメソッドを呼び出し
		cake2.decorate();//StrawberryCakeインスタンスdecotrateメソッドを呼び出し
	}
}

/*実行結果
本体のスポンジケーキ
チョコレートで飾りました.
本体のスポンジケーキ
イチゴで飾りました.
*/