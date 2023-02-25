
import java.util.Arrays;//Arraysクラスをインポート
//Functionクラス：平均値、分散、標準偏差、最大値、最小値、中央値を求めるクラスメソッド

public class Function {

	public static double ave(int[] x) {//平均を求めるクラスメソッドave
		int sum = 0;//合計値sumを初期化
		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			sum = sum + x[i];//合計値計算
		}
		double ave = sum / 26;//平均を計算しaveに代入
		return ave;//演算結果返却
	}

	public static int max(int[] x) {//最大値を求めるクラスメソッドmax
		int max = 0;//最大値maxを十分小さな値で初期化
		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			if (max < x[i]) {//最大値より大きい？
				max = x[i];//大きかったら最大値maxへ代入
			}
		}
		return max;//演算結果返却
	}

	public static int min(int[] x) {//最小値を求めるクラスメソッドmin
		int min = 100;//最小値minを十分大きな値で初期化
		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			if (min > x[i]) {//最大値より小さい？
				min = x[i];//小さかったら最小値minへ代入
			}
		}
		return min;//演算結果返却
	}

	public static double med(int[] x) {//中央値を求めるクラスメソッドmed
		Arrays.sort(x);//データxを昇順ソート
		int m = x.length / 2;//データの中間の値をmへ代入
		double med = (x[m] + x[m - 1]) / 2.0;//中央値を計算しmedへ代入
		return med;//演算結果返却
	}

	public static double var(int[] x) {
		int sum = 0;//合計値sumを初期化
		double var = 0;//（各値-平均）の2乗の合計値代入に使用するため初期化
		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			sum = sum + x[i];//合計値計算
		}
		double ave = sum / 26;//平均を計算しaveに代入

		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			var = var + (x[i] - ave) * (x[i] - ave);//（各値-平均）の2乗の合計値代入
		}
		var = var / 26;//分散を計算しvarへ代入しなおす
		return var;//演算結果返却
	}

	public static double sd(int[] x) {
		int sum = 0;//合計値sumを初期化
		double var = 0;//（各値-平均）の2乗の合計値代入に使用するため初期化
		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			sum = sum + x[i];//合計値計算
		}
		double ave = sum / 26;//平均を計算しaveに代入

		for (int i = 0; i <= 25; i++) {//iを0～25までインクリメント
			var = var + (x[i] - ave) * (x[i] - ave);//（各値-平均）の2乗の合計値代入
		}
		var = var / 26;//分散を計算しvarへ代入しなおす
		double sd = (Math.sqrt(var));//√分散＝標準偏差を計算しsdへ代入
		return sd;//演算結果返却
	}

}
