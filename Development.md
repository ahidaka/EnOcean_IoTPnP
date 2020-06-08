
# IoT PnP デバイス・ファームウェア 開発手順

## 前提条件

多数有り。


### IoT Central で sensor のテンプレートを作成
- これを、インターフェースファイルとして ダウンロード
- ■ モデルファイルとインターフェースファイルが別々の場合など、有り。

### VSCode でインターフェースファイルの編集（必要な場合）



### VSCode でインターフェースファイルを使って、ソースコードの Generate
- オプションに注意

### 作成したソースコードを Linux 環境に転送

### SDK-C のclone
- clone するBranchに注意


### どこかのタイミングで、xxx でインターフェースとモデルを公開
- 事前にアカウント作成が必要
- company or public
- companyだと、IoT PnP が動作しないらしいので、IoT PnP を試すなら public
    - Open Model Repo
    - Submit Files to Repo

## トラブル＆フォロー

現在まだ Preview 状態であることと、約１年前に発表されたプロジェクトで、ドキュメントやソースコード、ライブラリ、ツールの更新が完全でないこともあり、様々なトラブルがあります。

### Stub code Generate 時のオプション
sourceを選択します。CMake Linux のみを推奨します。当然ながらビルドはLinux環境だけになります。WSLは時間が無く、試していません。他の選択でも正常ビルド、正常動作するコードを出力させる方法があるのかもしれませんが、トラブルが多いためお勧めしません。

vcpkg.exe を使用する手順では、経験している限り次のトラブルのいずれかが発生して、結局はIoT Centralに接続できません。また、特定の環境でインストールしたLinux環境のiot-sdk であっても、以下と同種の問題が発生する場合があることを確認しています。その様な場合でも、別のマシン環境であれば全く同じ手順で、正常ビルド＆正常動作することを確認しています。

vcpkg.exe 利用などにより発生する問題（）
- ビルド時にエラーとなる
- アプリケーション起動でエラーとなる
- アプリケーション起動後に、テレメトリーがIoT Centralで表示されない。

### azure-iot-sdk のバージョン
必ず Generate Codeした時の README.md 記述の下記の手順に従って、public-preview-pnp-2019-08 ブランチを使用します。他のブランチやmasterでは、恐らく正常動作しないものと思われます。

```sh
git clone https://github.com/Azure/azure-iot-sdk-c --recursive -b public-preview-pnp-2019-08
```

### cmake 起動時のオプション
必ず Generate Codeした時の README.md 記述の下記の手順に従って、-Duse_prov_client=ON -Dhsm_type_symm_key:BOOL=ON オプションを付加します。他のオプションやオプション無しでは、恐らく正常動作しないものと思われます。

```sh
cmake .. -Duse_prov_client=ON -Dhsm_type_symm_key:BOOL=ON
```

### public リポジトリへの公開

自分で作成した model ファイルと interface ファイルを public リポジトリで公開する手順は、恐らくどこにも記載されていません。次の様にします。約半日調べたり試行錯誤してももわからなかったため、[matsujirushi 様](https://github.com/matsujirushi) に教えて頂きました。





### IoT Explorer の利用

https://github.com/Azure/azure-iot-explorer/issues/299
にも書きましたが、IoT Central に、


