/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFManagedStore <NSObject>
@required
-(id)domainObjectForKey:(id)arg1;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2;
-(id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2;
-(void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3;
-(void)resetKnowledgeStoreWithName:(id)arg1;

@end
