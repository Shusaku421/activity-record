//Java0517クラス:Practice305_04 クラスと Practice305_05 クラスの内容を一つのクラス内に記述
public class Java0517 {
	//メインメソッド
	public static void main(String[] args) {

		int x;//int型変数x
		int y;//int型変数y
		boolean z;//boolean型変数z

		x = 10;//xに10を代入
		y = 5;//yに5を代入

		z = x > y;//xがyより大きいかどうかの真偽をzに代入
		System.out.println(z);//zを表示
		z = x < y;//xがyより小さいかどうかの真偽をzに代入
		System.out.println(z);//zを表示
		y = 10;//yに10を代入
		z = x > y;//xがyより大きいかどうかの真偽をzに代入
		System.out.println(z);//zを表示
		z = x >= y;//xがy以上かどうかの真偽をzに代入
		System.out.println(z);//zを表示
		z = x == y;//xがyと等しいかどうかの真偽をzに代入
		System.out.println(z);//zを表示
		z = x != y;//xがy等しくないかかどうかの真偽をzに代入
		System.out.println(z);//zを表示

		System.out.println("\n");//区分け

		System.out.println(x);//xを表示
		x++;//xをインクリメント
		System.out.println(x);//xを表示
		System.out.println(++x);//xをインクリメントして表示
		System.out.println(x++);//xを表示してインクリメント
		System.out.println(x);//xを表示
	}
}

/*実行結果
true
false
false
true
true
false


10
11
12
12
13
 */