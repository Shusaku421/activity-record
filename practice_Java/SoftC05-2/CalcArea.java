// CalcAreaクラス:円、三角形、台形の面積を計算
public class CalcArea {
	
	//円の面積を求めるdouble circleArea(int radious)メソッド
	public double circleArea(int radious) {
		double ca = radious * radious * 3.14;//double型変数caに円の面積を計算し代入
		return ca;//演算結果を返却
	}

	//三角形の面積を求めるdouble circleArea(int radious)メソッド
	public double triangleArea(int bottom, int height) {
		double ta =(bottom * height) / 2;//double型変数taに三角形の面積を計算し代入
		return ta;//演算結果を返却
	}

	//台形の面積を求めるdouble trapezoidArea(int upper, int lower, int height)メソッド
	public double trapezoidArea(int upper, int lower, int height) {
		double tra = (upper + lower) * height / 2;//double型変数traに台形の面積を計算し代入
		return tra;//演算結果を返却
	}
}
