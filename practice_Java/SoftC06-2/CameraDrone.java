//Drone クラスを継承したCameraDroneクラス:ドローンのカメラを使用
public class CameraDrone extends Drone {

	public void takePicture() {//takePicture()メソッド
		System.out.println("静止画を撮影する");//「静止画を撮影する」表示
	}

	public void takeVideo() {//takeVideo()メソッド
		System.out.println("動画を撮影する");//「動画を撮影する」表示
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