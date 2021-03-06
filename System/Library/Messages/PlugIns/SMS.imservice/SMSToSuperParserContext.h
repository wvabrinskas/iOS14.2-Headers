/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMHTMLToSuperParserContext.h>

@class NSMutableArray, SMSTextPart, NSArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {

	NSMutableArray* _orderedParts;
	SMSTextPart* _currentTextPart;

}

@property (nonatomic,retain,readonly) NSArray * orderedParts;              //@synthesize orderedParts=_orderedParts - In the implementation block
-(id)name;
-(void)dealloc;
-(NSArray *)orderedParts;
-(void)_addPart:(id)arg1 ;
@end

