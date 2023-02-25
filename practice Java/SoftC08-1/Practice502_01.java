package package1;//「パッケージ」を「package1」に修正

public class Practice502_01 {//Practice502_01クラス

	public static void main(String[] args) {// メインメソッド
		int val1 = 10, val2 = 20;//int型val1,val2定義
		int result;//result
		Addition inst = new Addition();//インスタンス生成
		result = inst.calc(val1, val2);//メソッド呼び出し計算、結果を表示
		System.out.println("答えは" + result);
	}
}

/*実行結果
答えは30*/
