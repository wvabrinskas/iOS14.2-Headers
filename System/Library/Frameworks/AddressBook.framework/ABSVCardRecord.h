/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ABSVCardRecord : NSObject {

	void* _record;

}

@property (nonatomic,readonly) void* record;              //@synthesize record=_record - In the implementation block
-(void*)record;
-(id)initWithVCardRepresentation:(id)arg1 ;
-(id)initWithRecord:(void*)arg1 ;
-(void)dealloc;
@end
