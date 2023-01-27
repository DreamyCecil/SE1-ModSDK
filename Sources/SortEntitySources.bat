:: This script will sort all vanilla entity source files under proper directories
:: Useful for migrating mods
cd Entities

mkdir AI

move /Y NavigationMarker.es AI/NavigationMarker.es
move /Y Reminder.es         AI/Reminder.es
move /Y Spinner.es          AI/Spinner.es
move /Y TacticsChanger.es   AI/TacticsChanger.es
move /Y TacticsHolder.es    AI/TacticsHolder.es
move /Y Watcher.es          AI/Watcher.es
move /Y WatchPlayers.es     AI/WatchPlayers.es

mkdir Brushes

move /Y Bouncer.es                 Brushes/Bouncer.es
move /Y DestroyableArchitecture.es Brushes/DestroyableArchitecture.es
move /Y MovingBrush.es             Brushes/MovingBrush.es
move /Y MovingBrushMarker.es       Brushes/MovingBrushMarker.es
move /Y Pendulum.es                Brushes/Pendulum.es
move /Y Ship.es                    Brushes/Ship.es
move /Y ShipMarker.es              Brushes/ShipMarker.es
move /Y WorldBase.es               Brushes/WorldBase.es

mkdir Effects

move /Y BasicEffects.es            Effects/BasicEffects.es
move /Y BlendController.es         Effects/BlendController.es
move /Y BloodSpray.es              Effects/BloodSpray.es
move /Y Debris.es                  Effects/Debris.es
move /Y EffectMarker.es            Effects/EffectMarker.es
move /Y Effector.es                Effects/Effector.es
move /Y Fireworks.es               Effects/Fireworks.es
move /Y Lightning.es               Effects/Lightning.es
move /Y MeteorShower.es            Effects/MeteorShower.es
move /Y PhotoAlbum.es              Effects/PhotoAlbum.es
move /Y PyramidSpaceShip.es        Effects/PyramidSpaceShip.es
move /Y PyramidSpaceShipMarker.es  Effects/PyramidSpaceShipMarker.es
move /Y RollingStone.es            Effects/RollingStone.es
move /Y StormController.es         Effects/StormController.es
move /Y TimeController.es          Effects/TimeController.es
move /Y WorldSettingsController.es Effects/WorldSettingsController.es

mkdir Enemies

move /Y AirElemental.es        Enemies/AirElemental.es
move /Y Beast.es               Enemies/Beast.es
move /Y BigHead.es             Enemies/BigHead.es
move /Y Boneman.es             Enemies/Boneman.es
move /Y CannonRotating.es      Enemies/CannonRotating.es
move /Y CannonStatic.es        Enemies/CannonStatic.es
move /Y Catman.es              Enemies/Catman.es
move /Y ChainsawFreak.es       Enemies/ChainsawFreak.es
move /Y CrateBus.es            Enemies/CrateBus.es
move /Y CrateRider.es          Enemies/CrateRider.es
move /Y Cyborg.es              Enemies/Cyborg.es
move /Y CyborgBike.es          Enemies/CyborgBike.es
move /Y Demon.es               Enemies/Demon.es
move /Y Devil.es               Enemies/Devil.es
move /Y DevilMarker.es         Enemies/DevilMarker.es
move /Y Dragonman.es           Enemies/Dragonman.es
move /Y Elemental.es           Enemies/Elemental.es
move /Y EnemyBase.es           Enemies/EnemyBase.es
move /Y EnemyCounter.es        Enemies/EnemyCounter.es
move /Y EnemyDive.es           Enemies/EnemyDive.es
move /Y EnemyFly.es            Enemies/EnemyFly.es
move /Y EnemyMarker.es         Enemies/EnemyMarker.es
move /Y EnemyRunInto.es        Enemies/EnemyRunInto.es
move /Y EnemySpawner.es        Enemies/EnemySpawner.es
move /Y ExotechLarva.es        Enemies/ExotechLarva.es
move /Y ExotechLarvaBattery.es Enemies/ExotechLarvaBattery.es
move /Y ExotechLarvaCharger.es Enemies/ExotechLarvaCharger.es
move /Y Eyeman.es              Enemies/Eyeman.es
move /Y Fish.es                Enemies/Fish.es
move /Y Fishman.es             Enemies/Fishman.es
move /Y Gizmo.es               Enemies/Gizmo.es
move /Y Grunt.es               Enemies/Grunt.es
move /Y GruntSka.es            Enemies/GruntSka.es
move /Y Guffy.es               Enemies/Guffy.es
move /Y Headman.es             Enemies/Headman.es
move /Y Huanman.es             Enemies/Huanman.es
move /Y Mamut.es               Enemies/Mamut.es
move /Y Mamutman.es            Enemies/Mamutman.es
move /Y Mantaman.es            Enemies/Mantaman.es
move /Y RobotDriving.es        Enemies/RobotDriving.es
move /Y RobotFixed.es          Enemies/RobotFixed.es
move /Y RobotFlying.es         Enemies/RobotFlying.es
move /Y Santa.es               Enemies/Santa.es
move /Y Scorpman.es            Enemies/Scorpman.es
move /Y Shooter.es             Enemies/Shooter.es
move /Y Summoner.es            Enemies/Summoner.es
move /Y SummonerMarker.es      Enemies/SummonerMarker.es
move /Y Walker.es              Enemies/Walker.es
move /Y Werebull.es            Enemies/Werebull.es
move /Y Woman.es               Enemies/Woman.es

mkdir Environment

move /Y EnvironmentBase.es            Environment/EnvironmentBase.es
move /Y EnvironmentMarker.es          Environment/EnvironmentMarker.es
move /Y EnvironmentParticlesHolder.es Environment/EnvironmentParticlesHolder.es

mkdir Items

move /Y AmmoItem.es    Items/AmmoItem.es
move /Y AmmoPack.es    Items/AmmoPack.es
move /Y ArmorItem.es   Items/ArmorItem.es
move /Y HealthItem.es  Items/HealthItem.es
move /Y Item.es        Items/Item.es
move /Y KeyItem.es     Items/KeyItem.es
move /Y MessageItem.es Items/MessageItem.es
move /Y PowerUpItem.es Items/PowerUpItem.es
move /Y WeaponItem.es  Items/WeaponItem.es

mkdir Players

move /Y Player.es               Players/Player.es
move /Y PlayerActionMarker.es   Players/PlayerActionMarker.es
move /Y PlayerAnimator.es       Players/PlayerAnimator.es
move /Y PlayerMarker.es         Players/PlayerMarker.es
move /Y PlayerView.es           Players/PlayerView.es
move /Y PlayerWeapons.es        Players/PlayerWeapons.es
move /Y PlayerWeaponsEffects.es Players/PlayerWeaponsEffects.es

mkdir Tools

move /Y AnimationChanger.es         Tools/AnimationChanger.es
move /Y AnimationHub.es             Tools/AnimationHub.es
move /Y AreaMarker.es               Tools/AreaMarker.es
move /Y BackgroundViewer.es         Tools/BackgroundViewer.es
move /Y Camera.es                   Tools/Camera.es
move /Y CameraMarker.es             Tools/CameraMarker.es
move /Y Copier.es                   Tools/Copier.es
move /Y Counter.es                  Tools/Counter.es
move /Y CreditsHolder.es            Tools/CreditsHolder.es
move /Y Damager.es                  Tools/Damager.es
move /Y DebugEntityStatesDisplay.es Tools/DebugEntityStatesDisplay.es
move /Y DoorController.es           Tools/DoorController.es
move /Y Eruptor.es                  Tools/Eruptor.es
move /Y FogMarker.es                Tools/FogMarker.es
move /Y GradientMarker.es           Tools/GradientMarker.es
move /Y GravityMarker.es            Tools/GravityMarker.es
move /Y GravityRouter.es            Tools/GravityRouter.es
move /Y HazeMarker.es               Tools/HazeMarker.es
move /Y HudPicHolder.es             Tools/HudPicHolder.es
move /Y Light.es                    Tools/Light.es
move /Y Marker.es                   Tools/Marker.es
move /Y MessageHolder.es            Tools/MessageHolder.es
move /Y MirrorMarker.es             Tools/MirrorMarker.es
move /Y ModelDestruction.es         Tools/ModelDestruction.es
move /Y ModelHolder.es              Tools/ModelHolder.es
move /Y ModelHolder2.es             Tools/ModelHolder2.es
move /Y ModelHolder3.es             Tools/ModelHolder3.es
move /Y MusicChanger.es             Tools/MusicChanger.es
move /Y MusicHolder.es              Tools/MusicHolder.es
move /Y ParticlesHolder.es          Tools/ParticlesHolder.es
move /Y ScrollHolder.es             Tools/ScrollHolder.es
move /Y SoundHolder.es              Tools/SoundHolder.es
move /Y Switch.es                   Tools/Switch.es
move /Y Teleport.es                 Tools/Teleport.es
move /Y TextFXHolder.es             Tools/TextFXHolder.es
move /Y TouchField.es               Tools/TouchField.es
move /Y Trigger.es                  Tools/Trigger.es
move /Y VoiceHolder.es              Tools/VoiceHolder.es
move /Y WorldLink.es                Tools/WorldLink.es

mkdir Weapons

move /Y AirShockwave.es      Weapons/AirShockwave.es
move /Y AirWave.es           Weapons/AirWave.es
move /Y Bullet.es            Weapons/Bullet.es
move /Y CannonBall.es        Weapons/CannonBall.es
move /Y DevilProjectile.es   Weapons/DevilProjectile.es
move /Y Flame.es             Weapons/Flame.es
move /Y GhostBusterRay.es    Weapons/GhostBusterRay.es
move /Y LarvaOffspring.es    Weapons/LarvaOffspring.es
move /Y Pipebomb.es          Weapons/Pipebomb.es
move /Y Projectile.es        Weapons/Projectile.es
move /Y SeriousBomb.es       Weapons/SeriousBomb.es
move /Y SpawnerProjectile.es Weapons/SpawnerProjectile.es
move /Y Twister.es           Weapons/Twister.es
move /Y Water.es             Weapons/Water.es
