/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SBSlidingAlertDisplay.h"

@class UITableView, NSArray;

@interface SBSIMToolkitListDisplay : SBSlidingAlertDisplay <UITableViewDelegate, UITableViewDataSource> {
	UITableView* _table;
	NSArray* _items;
}
+(id)newTopBarForInstance:(id)instance;
-(void)dealloc;
-(id)_simToolkitListItems;
-(void)_selectListItem:(unsigned long)item;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)showsDesktopImage;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)alertDisplayWillBecomeVisible;
-(void)leftNavigationButtonPressed;
-(void)rightNavigationButtonPressed;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
@end

