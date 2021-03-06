/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKAppTabBar, IKJSTabBarItem, NSArray;

@interface IKJSTabBar : IKJSObject <IKJSTabBar> {
    IKAppTabBar *_appTabBar;
    NSArray *_tabItems;
}

@property(readonly) IKAppTabBar * appTabBar;
@property(retain) IKJSTabBarItem * selectedTab;
@property(retain) NSArray * tabItems;
@property(readonly) NSArray * tabs;
@property(readonly) IKJSTabBarItem * transientTab;

- (void).cxx_destruct;
- (void)_reload;
- (id)appTabBar;
- (id)initWithAppContext:(id)arg1 appTabBar:(id)arg2;
- (void)onReload;
- (void)onSelect;
- (id)selectedTab;
- (void)setSelectedTab:(id)arg1;
- (void)setTabItems:(id)arg1;
- (id)tabItems;
- (id)tabs;
- (id)transientTab;

@end
