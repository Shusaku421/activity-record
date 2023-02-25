//Multクラス
public class Mult {
	int multiple, i_times = 0;//インスタンス変数
	static int c_times = 0;//クラス変数

	Mult(int num) {//コンストラクタ
		multiple = num;//multipleに引数(num)を代入
		System.out.println(multiple + "倍するインスタンス");
		//multiple倍するインスタンス表示
	}

	//乗算を行うメソッドcalc
	public int calc(int value) {
		c_times++; // クラス変数c_timesをインクリメント
		i_times++; // インスタンス変数i_timesをインクリメント
		return value * multiple; // 乗算結果を返却
	}

	//クラス変数とインスタンス変数を表示するメソッドdisplay
	public void display() {
		System.out.println(multiple + "倍するインスタンス");//multiple倍するインスタンス表示
		System.out.println("インスタンス変数:" + i_times);//インスタンス変数i_times表示
		System.out.println("クラス変数:" + c_times);//クラス変数c_times表示
	}
}

/*実行結果
10倍するインスタンス
100倍するインスタンス
10倍:50
10倍するインスタンス
インスタンス変数:1
クラス変数:1
100倍:500
100倍するインスタンス
インスタンス変数:1
クラス変数:2
 */