/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSMutableArray, SBFolderIcon;

@interface SBFolder : NSObject {
	NSString* _displayName;
	NSString* _defaultDisplayName;
	NSMutableArray* _lists;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSMutableDictionary* _coalesceChangesRequests;
}
@property(retain, nonatomic) NSString* displayName;
@property(assign, nonatomic) BOOL isOpen;
@property(assign, nonatomic) SBFolderIcon* icon;
@property(assign, nonatomic, getter=isCancelable) BOOL cancelable;
+(int)maxListCount;
-(Class)listModelClass;
-(Class)listViewClass;
-(id)init;
-(void)dealloc;
-(id)lists;
-(unsigned)listCount;
-(BOOL)isEmpty;
-(BOOL)isFull;
-(BOOL)compactLists;
-(void)compactIconsAndLists;
-(id)addEmptyList;
-(void)removeEmptyList:(id)list;
-(BOOL)isIconStateDirty;
-(void)markIconStateClean;
-(id)listAtIndex:(unsigned)index;
-(unsigned)indexOfList:(id)list;
-(void)purgeLists;
-(id)placeIcon:(id)icon atIndexPath:(id*)indexPath;
-(id)insertIcon:(id)icon atIndexPath:(id*)indexPath;
-(void)removeIconAtIndexPath:(id)indexPath;
-(id)addIcon:(id)icon;
-(BOOL)canAddIcon;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)firstFreeSlotAvoidingFirstList;
-(id)iconsOfClass:(Class)aClass;
-(id)allIcons;
-(id)leafIcons;
-(id)folderIcons;
-(id)listContainingIcon:(id)icon;
-(id)listContainingLeafIconWithIdentifier:(id)identifier;
-(id)indexPathForIcon:(id)icon;
-(id)indexPathForIconWithIdentifier:(id)identifier;
-(id)iconAtIndexPath:(id)indexPath;
-(id)folderContainingIndexPath:(id)path relativeIndexPath:(id*)path2;
-(id)folderContainingIcon:(id)icon relativeIndexPath:(id*)path;
-(id)indexPathForEntity:(id)entity;
-(BOOL)_isCoalescingContentChanges;
-(void)noteIconAdded:(id)added;
-(void)noteIconRemoved:(id)removed;
-(void)startCoalescingContentChangesWithRequestID:(id)requestID;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID forceReload:(BOOL)reload;
-(BOOL)resetWithRepresentation:(id)representation leafIdentifiersAdded:(id*)added;
-(id)representation;
-(BOOL)matchesRepresentation:(id)representation;
@end

