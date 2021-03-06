/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIAlertView.h>

@class NSArray;

@interface SBAwayItemsView : UIAlertView {
	NSArray* _displayedItems;
	float _widestLabel;
}
-(void)dealloc;
-(id)itemTitleFont;
-(id)itemLabelFont;
-(BOOL)reloadData;
-(id)_labelForAwayItem:(id)awayItem count:(int)count;
-(id)_titleForAwayItem:(id)awayItem count:(int)count;
-(BOOL)hasAwayItems;
-(void)drawItems;
-(void)drawRect:(CGRect)rect;
@end

