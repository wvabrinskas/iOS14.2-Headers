/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVMediaSelectionOption.h>

@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(BOOL)isPlayable;
-(id)_groupID;
-(id)dictionary;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)group;
-(BOOL)_representsNilSelection;
-(id)initWithGroup:(id)arg1 ;
-(id)_groupMediaType;
-(void)dealloc;
@end

