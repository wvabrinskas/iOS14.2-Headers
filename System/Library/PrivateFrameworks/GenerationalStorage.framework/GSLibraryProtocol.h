/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol GSLibraryProtocol
@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
@required
-(NSString *)nameSpace;
-(NSObject*<GSAdditionStoring>)storage;
-(BOOL)generationsRemove:(id)arg1 error:(id*)arg2;

@end

