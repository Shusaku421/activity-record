function initialize() {
    var fav1 = new google.maps.LatLng(39.77970829891465, 141.14194977860407);
    var fav2 = new google.maps.LatLng(39.784210041605064, 141.1463110504623);
    var fav3 = new google.maps.LatLng(39.77871886544098, 141.14340621809916);

    var opts = {
        zoom: 15,
        center: fav1, //中心座標
        mapTypeId: google.maps.MapTypeId.ROADMAP
    };
    var map = new google.maps.Map(document.getElementById("map_canvas"), opts);

    var marker1 = new google.maps.Marker({
        position: fav1,
        title: "マーカー1",
        draggable: true
    });
    var marker2 = new google.maps.Marker({
        position: fav2,
        title: "マーカー2",
        draggable: true
    });
    var marker3 = new google.maps.Marker({
        position: fav3,
        title: "マーカー3",
        draggable: true
    });
    marker1.setMap(map);
    marker2.setMap(map);
    marker3.setMap(map);

    google.maps.event.addListener(marker1, 'dragend', function (ev) {
        document.getElementById('latitude').value = ev.latLng.lat();
        document.getElementById('longitude').value = ev.latLng.lng();
    });

    var info1 = new google.maps.InfoWindow({content: '<a href="https://www.homes.co.jp/archive/b-28965907/" target="_blank">自分のアパート</a><p>冷蔵庫、洗濯機、電子レンジ付きの部屋<br>広めのロフトがお気に入り</p>'});
    var info2 = new google.maps.InfoWindow({content: '<a href="https://www.yakuodo.co.jp/shop/shopdetail.html?id=247" target="_blank">薬王堂巣子店</a><p>生活の基点<br>ここが無くなったら食料品が買えなくなる</p>'});
    var info3 = new google.maps.InfoWindow({content: '<a href="https://tabelog.com/iwate/A0301/A030104/3009835/" target="_blank">American Cafe DENVERS</a><p>飯が美味い！<br>炭水化物の化け物みたいなハンバーガーがでてくる</p>'});

    google.maps.event.addListener(marker1, 'click', function () {
        info1.open(map, marker1);
    });

    google.maps.event.addListener(marker2, 'click', function () {
        info2.open(map, marker2);
    });

    google.maps.event.addListener(marker3, 'click', function () {
        info3.open(map, marker3);
    });
}