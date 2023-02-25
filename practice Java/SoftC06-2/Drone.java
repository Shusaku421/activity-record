//Droneクラス:ドローンの操縦と離着陸
public class Drone {

	public void takeoff() {//takeoff()メソッド
		System.out.println("ドローンを離陸される");//「ドローンを離陸される」表示
	}

	public void land() {//land()メソッド
		System.out.println("ドローンを着陸させる");//「ドローンを着陸させる」表示
	}

	public void operate() {//operate()メソッド
		System.out.println("ドローンを操縦する");//「ドローンを操縦する」表示
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