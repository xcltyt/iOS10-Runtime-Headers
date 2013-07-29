/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource  {
    GKGame *_game;
    SEL _detailPressedAction;
}

@property(retain) GKGame * game;
@property SEL detailPressedAction;


- (void)collectionViewWillBecomeActive:(id)arg1;
- (SEL)detailPressedAction;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
- (void)setGame:(id)arg1;
- (id)game;
- (unsigned int)numberOfMatches;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end