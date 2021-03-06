/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableDictionary, NSDateFormatter;

@interface SGReverseTemplatesJSDataDetectors : NSObject {

	NSMutableDictionary* _scanners;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _naiveDateFormatter;
	NSDateFormatter* _noTimeFormatter;

}
-(id)init;
-(void)dealloc;
-(id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3 metadataForTypes:(id)arg4 ;
-(id)_result:(DDResultRef)arg1 containsTypes:(id)arg2 ;
-(void)_result:(DDResultRef)arg1 containsTypes:(id)arg2 foundTypes:(id)arg3 ;
@end

