/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Messages.framework/Messages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface _MSTempFileManager : NSObject {

	NSHashTable* _registry;

}

@property (nonatomic,readonly) NSHashTable * registry;              //@synthesize registry=_registry - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSHashTable *)registry;
-(id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2 ;
@end

