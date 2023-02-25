//SoftC06Part2クラス:ドローンの操縦
public class SoftC06Part2 {
	//メインメソッド
	public static void main(String[] args) {

		CameraDrone inst1 = new CameraDrone();//CameraDroneインスタンス
		AutoDrone inst2 = new AutoDrone();//AutoDroneインスタンス

		inst1.takeoff();//CameraDroneインスタンスtakeoffメソッド呼び出し
		inst1.operate();//CameraDroneインスタンスoperateメソッド呼び出し
		inst1.takePicture();//CameraDroneインスタンスtakePictureメソッド呼び出し
		inst1.takeVideo();//CameraDroneインスタンスtakeVideoメソッド呼び出し
		inst1.land();//CameraDroneインスタンスlandメソッド呼び出し
		inst2.takeoff();//AutoDroneインスタンスtakeoffメソッド呼び出し
		inst2.autopilot();//AutoDroneインスタンスautopilotメソッド呼び出し
		inst2.land();//AutoDroneインスタンスlandメソッド呼び出し
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