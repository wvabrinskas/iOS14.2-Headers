/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDLocalContext;
@interface _DECContextHelper : NSObject {

	id<_CDLocalContext> _context;

}

@property (nonatomic,readonly) id<_CDLocalContext> context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)fetchContextValueForKeyPath:(id)arg1 ;
-(id<_CDLocalContext>)context;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
-(void)registerForNotifications:(id)arg1 ;
@end

