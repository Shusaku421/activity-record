//Practice504_00aクラス:例外処理の例
public class Practice504_00a {
//メインメソッド
	public static void main(String[] args) {
		try {// 例外が発生する可能性のある処理
				// 実行時の引数を整数に変換しiargsに代入
			int iargs = Integer.parseInt(args[0]);
			int ans = 24 / iargs; // iargsを分母に割り算
			System.out.println("ans=" + ans); // 結果
		} catch (ArrayIndexOutOfBoundsException aioobe) {
			// 配列外の要素を指定した場合の例外
			System.out.println("引数の指定がありません");
		} catch (ArithmeticException ae) {
			// 0で除算した場合の例外
			System.out.println("引数が誤りです(0は指定できません)");
		} finally {
			System.out.println("処理が終了しました");
		}
	}
}

/*実行結果
引数の指定がありません
処理が終了しました

引数が誤りです(0は指定できません)
処理が終了しました

ans=6
処理が終了しました
 */