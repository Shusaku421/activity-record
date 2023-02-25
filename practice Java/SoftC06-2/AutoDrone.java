//Drone クラスを継承したAutoDroneクラス:ドローンの自動操作
public class AutoDrone extends Drone {

	public void autopilot() {//autopilot()メソッド
		System.out.println("自動航行する");//「自動航行する」表示
	}

	public void takeoff() {//takeoff()メソッドをオーバーライド
		System.out.println("周囲の安全を確認");//「周囲の安全を確認」表示
		super.takeoff();//親クラスのtakeoff()メソッドを呼び出し
	}

	public void land() {//land()メソッドをオーバーライド
		System.out.println("着陸地点に戻る");//「着陸地点に戻る」表示
		System.out.println("周囲の安全を確認");//「周囲の安全を確認」表示
		super.land();//親クラスのland()メソッドを呼び出し
	}
}

/*実行結果
ドローンを離陸される
ドローンを操縦する
静止画を撮影する
動画を撮影する
ドローンを着陸させる
周囲の安全を確認
ドローンを離陸される
自動航行する
着陸地点に戻る
周囲の安全を確認
ドローンを着陸させる
*/