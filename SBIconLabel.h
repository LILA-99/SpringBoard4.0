/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIControl.h>

@class NSString;

@interface SBIconLabel : UIControl {
	NSString* _label;
	unsigned _drawMoreLegibly : 1;
	unsigned _inDock : 1;
	unsigned _ellipsizesText : 1;
	unsigned _kerningAllowed : 1;
	unsigned _onWallpaper : 1;
}
-(void)dealloc;
-(void)setText:(id)text;
-(void)setInDock:(BOOL)dock;
-(void)setDisplaysOnWallpaper:(BOOL)wallpaper;
-(void)setEllipsizesText:(BOOL)text;
-(void)setKerningAllowed:(BOOL)allowed;
-(void)drawRect:(CGRect)rect;
@end

